### A* pathfinding
#### Objective-C implementation

### usage

#### create

upon creation or total environment size change, alloc init a new class object:

`-(id) initWithColumns:(int)columns Rows:(int)rows ObstaclesCells:(NSArray*)obstacleCells`

* environment must be a rectangle
* obstacleCells is an `NSArray` of `BoardLocation` objects

when only obstacle cells change, don’t alloc init a new object:

`-(void) updateObstacleCells:(NSArray*)obstacleCells`

#### retrieve

two sets of data both return `NSArray` of `BoardLocation`

`-(NSArray*) pathFromAtoB:(BoardLocation*)start B:(BoardLocation*)end`

* the A* optimized path

`-(NSArray*) cellsAccesibleFrom:(BoardLocation*)location`

* list of all cells accessible to one point, as determined by A*

#### settings

movement can be restricted to Von Neumann or Moore type neighborhoods:

set `NEIGHBORHOOD_TYPE` to 0 (Von Neumann) or 1 (Moore)
