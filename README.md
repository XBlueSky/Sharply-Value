# Sharply Value (Coalition Game)

### Rationale

Consider the marginal contribution of player *i* for all possible coalition *S ⊂ N \ {i}*  

  * There are |*S*|! permutations in which all members in *S* precede *i*
  * There are (*n* - |*S*| - 1)! permutations in which all members not in *S* follow *i*  
  * *i* has the same marginal contribution in these permutations  
  
![Formal definition](https://user-images.githubusercontent.com/30610447/28811567-b6db52bc-76c2-11e7-98f6-8f774ea5fb83.png)
  
---

###  Input Explain

input how many players in this coalition game and then input the **VALUE** of players' combination number.  

#### <table><tr><td bgcolor=AntiqueWhite><font color=LightCoral>\# Example Input</font></td></tr></table>

*Please input players number :* 3  
*< P1 > value :* 18  
*< P2 > value :* 16  
*< P3 > value :* 10  
*< P1 P2 > value :* 34  
*< P1 P3 > value :* 34  
*< P2 P3 > value :* 30  
*< P1 P2 P3 > value :* 54  

---
  
###  Output Explain

it will show the results of every players' **SHARPLY VALUE**.

#### <table><tr><td bgcolor=AntiqueWhite><font color=LightCoral>\# Example Output</font></td></tr></table>  
  
*P1 :* 21  
*P2 :* 18  
*P3 :* 15  
  
  
