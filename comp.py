bm = []
class Spot(object):
    def __init__(self, L, h, position = 'none'):
        self.L = L * 1000
        self.h = h
        self.position = position
        self.Q =  'none'
    def log(self):
        print 'length :\t', self.L
        print 'height :\t', self.h
        print 'position :\t', self.position
        print 'Q :\t\t', self.Q, 'mm'
        print 'P :\t\t', self.P, 'm'
        print 'R :\t\t', self.R, 'm'
def eachLog(*lis):
    for i, e in enumerate(lis):
        e.log()
        print('=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=')
def computed(*lis):
    cache_h = []
    cache_l = []
    for i,e in enumerate(lis):
        cache_h.append(e.h)
        cache_l.append(e.L)
    e_h = sum(cache_h)
    e_ll = sum(cache_l)/1000
    e_L = lis[-1].position - lis[0].position
    f_h =  (e_h - e_L) * 1000
    n = round(-(f_h/e_ll), 1)
    for i,e in enumerate(lis):
        e.Q = round(e.L / 1000 * n)
        e.P = e.h + e.Q/1000
        if i == 0:
            e.R = e.position + e.P
        else:
            e.R = lis[i-1].R + e.P

    return n


bm.append(Spot(2.0, 1.467, 40.877))
bm.append(Spot(3.2, -2.478))
bm.append(Spot(5.3, 3.492))
bm.append(Spot(8.9, -1.456, 41.879))

f_h = computed(*bm)
eachLog(*bm)
print f_h
