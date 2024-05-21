#!/usr/bin/python3
class Team:
    totalPoints = 0

    def __init__(self, name, position, points):
        self.name = name
        self.position = position
        self.points = points
        #adding player
        print(f"{self.name} added as {self.position}")

    def shoot2point(self):
        print(f"{self.name} shoots")
        self.points = self.points+2
        Team.totalPoints += self.points
        print(f"{self.name} has scored {self.points}")

    def shoot3point(self):
        print(f"{self.name} from 3")
        self.points = self.points+3
        Team.totalPoints += self.points
        print(f"{self.name} has scored {self.points}")

    @classmethod
    def finalScore(getFinal):
        print(f"Boston ended the quarter with with {getFinal.totalPoints}")


print("--------FIST QUATER-------")
print("     starting lineup")
print(f"-------------------------")
jruHoliday = Team("Jrue Holiday", "PG", 0)
derrickWhite = Team("Derrick White", "SG", 0)
jallenBrown = Team("Jallen Bwon", "SF", 0)
jasonTatum = Team("Jason Tatum", "PF", 0)
kristapsPorzingis = Team("Kristaps Porzingis", "C", 0)
print("-------------")
print("Match starts ")
print("-------------")
jruHoliday.shoot2point()
jruHoliday.shoot3point()
jasonTatum.shoot3point()
jallenBrown.shoot2point()
jallenBrown.shoot2point()
jasonTatum.shoot3point()
jasonTatum.shoot3point()
kristapsPorzingis.shoot2point()
derrickWhite.shoot2point()
jallenBrown.shoot3point()
jasonTatum.shoot3point()

Team.finalScore()
