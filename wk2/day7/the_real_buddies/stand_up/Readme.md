# It's Not Just Standing Up: Patterns for Daily Standup Meetings

## <a href="https://www.martinfowler.com/articles/itsNotJustStandingUp.html" target="_blank">Patterns for Daily Standup Meetings</a>  

Daily stand-up meetings have become a common ritual of many teams, especially in Agile software development. However, there are many subtle details that distinguish effective stand-ups and a waste of time.  

## We stand up to keep the meeting short
The daily stand-up meeting (also known as a "daily scrum", a "daily huddle", "morning roll-call", etc.) is simple to describe:
```
The whole team meets every day for a quick status update. We stand up to keep the meeting short.
```
## What might “good” look like?
One of the team members steps up to talk about the card on the furthest right of the board, closest to the point of deployment. He’s still having some problems with the deployment script. Another team member suggests that she can help resolve that. The sequence continues from right-to-left, top-to-bottom, people describing what is happening with each of the work items, and others chiming in if they can help resolve obstacles. On the side, the team leader is recording the raised obstacles on the improvement board.  

At one point, there is a slightly longer discussion exploring how to deal with a particular problem. Noticing the stall, the team leader subtly raises a finger to interrupt... just before one of the people suggest that they should take it offline.  

People separate and start discussing various things that were raised, including the obstacles, the new ideas, and questions about certain work items.  

## The particular set of problems that occur when people attempt to work together
Daily stand-up meetings are a recurring solution to a particular set of problems that occur when a group of people attempt to work together as a team.

Stand-ups are a mechanism to regularly synchronise so that teams...  
**Share understanding of goals.** Even if we thought we understood each other at the start (which we probably didn’t), our understanding drifts, as does the context within which we’re operating. A “team” where each team member is working toward different goals tends to be ineffective.  

**Coordinate efforts.** If the work doesn’t need to be coordinated, you don’t need a team. Conversely, if you have a team, I assume the work requires coordination. Poor coordination amongst team members tends to lead to poor outcomes.  

**Share problems and improvements.** One of the primary benefits of a team versus working alone, is that team members can help each other when someone encounters a problem or discovers a better way of doing something. A “team” where team members are not comfortable sharing problems and/or do not help each other tends to be ineffective.  

**Identify as a team.** It is very difficult to psychologically identify with a group if you don’t regularly engage with the group. You will not develop a strong sense of relatedness even if you believe them to be capable and pursuing the same goals.  

## Patterns of daily stand-up meetings
I’ve organised the patterns to answer the following questions:  
Who attends?  
What do we talk about?  
What order do we talk in?  
Where and when?  
How do we keep the energy level up?  
How do we encourage autonomy?  

## Who attends?
**All Hands**  
People and representatives from various areas (e.g., marketing, production support, upper management, training, etc.) wish to know about and/or contribute to the status and progress of the project. Communicating status in multiple meetings and reports requires a lot of duplicate effort.  

Therefore, replace some or all of the meetings and reports with the daily stand-up. Anyone who is directly involved in or wants to know about the day-to-day operation of the project should attend the single daily stand-up meeting.

But, people not directly involved can disrupt the stand-up if they are unclear about what is expected behaviour. This may be addressed by simply informing new participants and observers of expected norms beforehand.

## Work Items Attend
```
if the stories are so important to the project, they ought to be the ones speaking in the standup
-- Brian Marick, "Latour 3: Anthrax and standups"
```

People are too Focused on the Runners, not the Baton. That is, everyone is busy but not necessarily progressing work items.  

Therefore, instead of thinking of the daily stand-up as a ritual for the people, think of it as a ritual where the Work Items Attend  and the people attend only to speak for the work items... since obviously the work items can’t actually talk.  

The Yesterday Today Obstacles questions may still be used but will be from the perspective of the work item, rather than the person. This also means that not every person may talk. There is no sense of obligation to say anything that is not relevant to progress the work.  

Because of the clearer focus, it is more likely for people to raise, and sign- up to remove, obstacles without prompting.  
But, the lack of obligation to speak may hide problems with people who are shy or otherwise not inclined to say anything. This is more difficult to detect with a work-item focus.  

## What do we talk about?
Yesterday Today Obstacles. Also Known As: Three Questions  
Some people are talkative and tend to wander off into Story Telling. Some people want to engage in Problem Solving immediately after hearing a problem. Meetings that take too long tend to have low energy and participants not directly related to a long discussion will tend to be distracted.  

Therefore, structure the contributions using the following format:  
What did I accomplish yesterday?  
What will I do today?  
What obstacles are impeding my progress?  
These are the minimum number of questions that satisfy the goals of daily stand-ups.  

Lasse Koskela proposed another form of these questions in order to emphasise that team members should not be Reporting to the Leader:  
Each team member updates his peers:  
In turn, each team member provides his peers with 3 pieces of information:  
Things I have done since yesterday's meeting  
Things I am going to get done today  
Obstacles that I need someone to remove  

Jonathan Rasmussen offered different wording in order to change the dynamic of the stand-up:  
What you did to change the world yesterday  
How you are going to crush it today  
How you are going to blast through any obstacles unfortunate enough to be standing in your way  

Answering these types of questions completely changes the dynamic of the stand-up. Instead of just standing there and giving an update, you are now laying it all the line and declaring your intent to the universe.  

Buffer added a section where people share something they're working on to improve themselves.  

Mark Levison has found it useful to add more targeted improvement questions. The last two questions would be changed to match the specific context.  
What did you complete yesterday?  
What do you commit to today?  
What are your impediments/obstacles?  
What Code Smell/Missing Unit Test/... did you spot yesterday?  
What improvement did you make to the code yesterday?  

The larger question is whether Yesterday Today Obstacles is creating too much of a focus on personal commitment versus paying attention to the right things... which leads to Walk the Board.  

## Improvement Board
Also Known As: Blockage Board, Impediment Board, Kaizen Newspaper.  
Obstacles raised in the stand-up are not removed or otherwise addressed in a timely fashion.  

Therefore, post raised obstacles to an Improvement Board. This is a publicly visible whiteboard or chart that identifies raised obstacles and tracks the progress of their resolution.   
An Improvement Board can be updated outside of stand-ups and serves as a more immediate and perhaps less confronting way to initially raise obstacles. A common mistake is to not write large enough to allow people to read the blockages from a distance.  

The simple act of writing an issue down and therefore explicitly acknowledging it is a very reliable way to reduce drawn out conversations. So even if not everyone agrees that any particular item is an obstacle, it is worth simply writing it down for discussion after the meeting has ended.  

Including an occurrence count with each raised obstacle highlights which issues are generally more important to deal with first.  

The Improvement Board risks devolving into a whinging board if too many obstacles are raised on it that the team has no influence on resolving.  

## What order do we talk in?
