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
Last Arrival Speaks First
During a stand-up, attendees need to know who is supposed to speak first. Having the facilitator decide who should speak first is a subtle though definite force against self-organisation. The team should know without intervention who speaks first.  

Therefore, Agree that the Last Arrival Speaks First. This is a simple rule that also has the added benefit of encouraging people to be punctual about showing up for the stand-up.  

But, The last arrival is also likely to be the person who is least prepared to start off the meeting well.

### Round Robin
Use a simple predetermined rule like a Round Robin to determine who should go next. It doesn't matter if it is clockwise or counter-clockwise. What does matter is that the team runs the meeting, not the facilitator or manager.  

### Pass the Token
With simple, predictable ordering mechanisms (e.g., Round Robin), it is very easy for participants to ignore other speakers until it is closer to their turn. There may be a tendency to think of other things rather than pay attention to what others are saying.

Therefore, Introduce an unpredictable ordering mechanism, like tossing a speaking token (e.g., a ball) to determine who should speak next.  

But, With larger teams, it may become difficult to remember who has already spoken. In those cases, it may be easier to stick to simpler mechanisms like Round Robin.  

Depending on the culture of the organisation or even team, tossing a ball around may also be seen as unprofessional and would create an unnecessary negative perception of the underlying ritual.   

### Take a Card 
Have each team member Take a Card to determine which order to speak. Imagine a stack of cards, each of which has a number on it. As each team member comes to the meeting, they can select a card which then tells them what order to speak in.  

### Walk the Board
With this board in place, the stand-up moves through each work item from end of process to start of process (e.g., right-to-left) and from highest-to-lowest priority (e.g., top-to-bottom). You may even explicitly indicate on the board what sequence should be used.  

### Where and when? 
#### Meet Where the Work Happens
Meet Where the Work Happens, not in a meeting room. If you have a “story wall” or “Kanban board”, meet in front of that.  

#### Same Place, Same Time
Same Place, Same Time is not intended to be blindly inflexible. The important thing is for the start time to be mostly consistent and rescheduling to be rare. If rescheduling is required often, it may be an indication that the start time should change. If a particular location is inconvenient for everyone to get to, it's probably an indication the location should change.  

#### Use the Stand-up to Start The Day
Use the Stand-up to Start the Day. With flexible work hours, not every team member will arrive at work at the same time. A common practice with “flex-time” is to use a set of core working hours. The start time should be at the start of these core working hours. Similarly, if team members need to arrive later for personal reasons (e.g., need to drop off kids at school), the start time should be set at a time so that everyone can attend.  

#### Don't Use the Stand-up to Start the Day
The stand-up tends to serve as the ritual to set focus for the day, especially if you Use The Stand-up to Start the Day. Because of this, team members tend not to work on features until the stand-up. When the meeting is not actually held first thing, this tendency may have a significant impact on productivity.  

Therefore, Don’t Use the Stand-up to Start the Day. Schedule the daily stand- up meeting far enough into the day that it will not be psychologically associated as starting the day.  

#### How do we keep the energy level up?
The stand-up should be more of a Huddle than a meeting. If it's difficult to hear, bring everyone closer. Beyond allowing for a more relaxed speaking volume, being physically closer tends to cause participants to be more attentive on their own. Being able to stand physically closer is also an expression of greater trust within the team.   

#### Stand Up
Have all attendees Stand Up during the meeting. Use standing up to link physical with mental readiness. Physical discomfort will also remind attendees when a meeting is taking too long. A simple way to encourage this is to simply hold the meeting where there are no chairs.  

But, Standing up tends to cause meetings to shorten, but does not guarantee that they will shorten to an optimal length. People may learn to cope with the discomfort instead of taking a more appropriate response. Also if the meetings are not taking too long nor wandering off-topic, standing up is an unnecessary ritual.  

#### Fifteen Minutes or Less
Most people will wander mentally when they are in long meetings. A long, droning meeting is a horrible, energy-draining way to start the day. A specific number helps remind us when to consider adjustment to reduce the time of the meeting.   

Therefore, Keep the daily stand-ups to Fifteen Minutes or Less. As a general rule, after fifteen minutes, the average person's mind is going to wander which doesn't help with setting focus.  

#### Time the Meetings
As with all measures, timing the meetings shouldn't be introduced unless there is an actual goal to accomplish due to a problem with energy levels. Once the goal is accomplished, the measurement should be dropped. Measuring for no particular reason leads to suspicion and metrics apathy.  

Time is a proxy for energy, attention, and pace. Pay attention more to those things than the time.  

#### Take it Offline
Use a simple and consistent phrase like “Take It Offline” as a reminder that such discussions should take place outside of the daily stand-up. If the discussion was Socialising, nothing more is required. If the discussion was Problem Solving, the facilitator (and eventually just the team) should ensure that the right people are nominated or sign up to deal with the issue later.  

There is a difference between Problem Solving and a clarifying question. Information that is not understood is not useful. The extent upon which clarifying questions are allowed should vary depending on how large the team is and whether it will impact Fifteen Minutes or Less.  

## How do we encourage autonomy?
#### Rotate the Facilitator
Rotate the Facilitator. Rotate assignment of a role responsible for ensuring people attend the stand-up and stick to the agreed upon rules.  

But, Teams that are not experienced with stand-ups benefit greatly from having a coach experienced in the process. It is more that the team should be weaned into taking greater control of the stand-up. At some point, no explicit facilitator should be required at all.  

#### Break Eye Contact
Team members are Reporting to the Leader, that is, they're only talking to the meeting facilitator instead of each other. We want the team to take ownership of the stand-up and this requires removing any dependence on a single facilitator.  

Therefore, The facilitator should Break Eye Contact as a subtle way of reminding the speaker that s/he should be addressing the team, not just one person. One way to do this is to move around so that the current speaker can't see the facilitator.  

## How do we know when a stand-up is going poorly?
There are stand-up “smells” which are pretty good indicators that things are going wrong. It is important to note that even if you have no smells, this does not mean the stand-up is going right. It just means that it doesn't stink.  
  
Most of the following smells are linked back to the previous patterns. For those that are not, the underlying issues tend to be more subtle or outside the scope of the daily stand-up, and people will have to come up with their own solutions.  

#### Focused on the Runners, not the Baton
People are too focused on what they are doing but neglect to consider whether their activities are actually progressing the work. Reframe the stand-up such that the Work Items Attend.  

#### Reporting to the Leader
Team members are facing and talking to the manager or meeting facilitator instead of to the team. This indicates that the daily stand-up is for the manager/facilitator when it is actually supposed to be for the team. There are various ways to break this dependence: Rotate the Facilitator, Break Eye Contact, change the form of Yesterday Today Obstacles, use Pass the Token, etc.  

#### People are Late
This is directly addressed by Same Place, Same Time, but as mentioned may indicate that the stand-up is being held at the wrong time or at the wrong place.  

There are other patterns to respond to this such as imposing a fine. However, I generally would not recommend them as they imply that the issue is about extrinsic motivation when it is much more likely to be something else.  

#### Socialising
One of the goals of the stand-up is to increase team socialisation. However, the daily stand-up is not intended for team members to “catch up” with each other on non project-related matters. It's difficult to provide examples of this since the degree to which socialising passes from team-building to distracting varies from team to team. The threshold can be detected from the behaviours of participants not directly involved in the socialisation. If their energy levels remain high, then it's probably just team-building; if their energy levels drop, then Take It Offline and perhaps provide another forum to act as a Water Cooler.  

#### I Can't Remember
What did I do yesterday?... I can't remember... What am I doing today?... I dunno...  
Lack of preparation causes slower pace which causes lower energy. It also risks failing Fifteen Minutes or Less, which further reduces energy levels.  
A nice way to bypass this problem is to switch to a stand-up where Work Items Attend and we Walk the Board.  
Otherwise, this is a matter of expectation of responsibility to know the answers for Yesterday Obstacles Today.  

#### Story Telling
Instead of providing a brief description of an issue, the participant provides enough details and context to cause others to tune out. The general rule is to identify obstacles during the stand-up and discuss the details after the stand-up. This can be summarised as “Tell the headline, not the whole story” or Take it Offline.  

#### Problem Solving
`It’s a time to raise issues and surface ideas, not a time for in-depth problem-solving. -- Marc Graban, "Video of a Daily Huddle at Everett Clinic"`  

The key to keeping the stand-ups Fifteen Minutes or Less is to limit the Story Telling and not succumb to Problem Solving during the meeting. Take it Offline.  

#### Low Energy
Could indicate a slow-down of pace due to Story Telling, Problem Solving, etc. In which case Take it Offline. Could be simply a matter of team size. Could be the time of day which suggests trying the alternative of Use the Stand-up to Start the Day and Don't Use the Stand-up to Start the Day.  

#### Obstacles are not Raised
There may be several reasons for obstacles not being raised. Not remembering, high pain threshold, lack of trust in raising issues (because Obstacles are not Removed), no convenient way of raising issues, etc. The facilitator should take care to encourage people to raise obstacles.  

#### Obstacles are not Removed
With the exception of a blaming environment, the surest way to stop people from raising obstacles is to not remove them. To make it difficult to forget and/or ignore obstacles, track them publicly with an Improvement Board.  

#### Obstacles are Only Raised in the Stand-up
Stand-ups act as a safety net. At worst, an obstacle will be communicated to the greater team within one day. However, doing stand-ups is not intended to stop issues from being raised and resolved during the day. Introducing an alternative medium to raise obstacles such as an Improvement Board may help. If not, underlying reasons may be discovered using retrospectives.  

## It’s really just standing up together every day
 It should be clear that a daily stand-up is not just standing up together every day.  

At the end of the day, it’s important to not be too concerned about having every pattern or even having some of the smells. Remember the problems we're trying to solve. Are people energised? Are people sharing problems and ideas? Are people focused on our objectives? Are people working together as a team? Does everyone know what’s going on?  

If you can answer those questions in the affirmative, the meeting is probably going okay. After all, it's really just standing up together every day.  

