# Coalition Game

### Sharply Value: Rationale

**Consider the marginal contribution of player***i* **for all possible coalition** *S ⊂ N \ {i}*  
  * There are |*S*|! permutations in which all members in *S* precede *i*
  * There are (*n* - |*S*| - 1)! permutations in which all members not in *S* follow *i*  
  * *i* has the same marginal contribution in these permutations  
  
![Formal definition]{https://wikimedia.org/api/rest_v1/media/math/render/svg/3bde57e0e8a7aa2d48d541b1a01b3cb47898c981}

---

###  input explain

*Please input players number :* input how many players in this coalition game  

and then input the **value** of players' combination number.  

#### example input

*Please input players number :* 3
*< P1 > value :* 18
*< P2 > value :* 16
*< P3 > value :* 10
*< P1 P2 > value :* 34
*< P1 P3 > value :* 34
*< P2 P3 > value :* 30
*< P1 P2 P3 > value :* 54

---
  
###  output explain

it will show the results of every players' **sharply value**  

#### example output

*P1 :* 21
*P2 :* 18
*p3 :* 15

