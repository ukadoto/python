import random
class Pets(object):
    def __init__(self, name, ves, vozrast, dlina,color):
            self.name = name
            self.ves = ves
            self.vozrast = vozrast
            self.dlina = dlina
            self.color = color
            self.golod = True
            self.coord = [0,0]
            self.asleep = False
        
    def display_info(self):
        print('Питомца зовут %s, его вес %s кг, его возраст %s месяца, его длина %s см и его %s цвет' % (self.name, self.ves, self.vozrast, self.dlina, self.color))
    def feed(self, food):
        if self.golod == True:
            self.golod = False
            print('%s съел %s. Теперь он сыт'%(self.name, food))
            
    def run(self,napravlenie):
        if 'вперед' in napravlenie:
            self.coord[0] = self.coord[0] +1
        else:
            if 'назад' in napravlenie:
                self.coord[0] = self.coord[0] -1
            else:
                if 'вправо' in napravlenie:
                    self.coord[1] = self.coord[1] +1
                else:
                    if 'влево' in napravlenie:
                        self.coord[1] = self.coord[1] -1
                
            print(self.coord)
            
    def sleep(self):
        self.asleep = True
        print('%s уснул. Тссс' %(self.name))
        
    def wake_up(self):
        self.asleep = True
        print('%s проснулся. Ура' %(self.name)) 
        
    def play_toy(self, toy):
        self.golod = True
        print('%s получил новую игрушку - %s. Он с ней играет'%(self.name,toy))
    
    def voice(self):
        print('%s говорит %s'%(self.name,self.sound))
            
class Cat(Pets):
        def __init__(self, name, ves, vozrast, dlina,color):
            Pets.__init__(self, name, ves, vozrast, dlina,color)
            self.sound = 'мяу'
        
        def hunt(self, target):
            if random.randint(0,1) ==0:
                print('%s охотится на %s. Охота закончилась удачно.'%(self.name, target))
            else:
               print('%s охотится на %s. Охота закончилась неудачно.'%(self.name, target)) 

class Dog(Pets):
    
    def guard(self, place):
        print('%s охраняет %s'%(self.name, place))
    
    def __init__(self, name, ves, vozrast, dlina,color):
            Pets.__init__(self, name, ves, vozrast, dlina,color)
            self.sound = 'гав-гав'
            
barsik =Cat('Барсик','3','12','40','рыжий')
barsik.display_info()
barsik.feed('корм')
barsik.run('вперед')
barsik.run('назад')
barsik.run('вправо')
barsik.run('влево')
barsik.sleep()
barsik.wake_up()
barsik.play_toy('клубок')
barsik.hunt('мышь')
barsik.voice()

bobik =Dog('Бобик','5','24','60','черный')
bobik.display_info()
bobik.feed('корм')
bobik.run('вперед')
bobik.run('назад')
bobik.run('вправо')
bobik.run('влево')
bobik.sleep()
bobik.wake_up()
bobik.play_toy('мяч')
bobik.guard('мышь')
bobik.voice()
