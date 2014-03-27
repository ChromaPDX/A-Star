//
//  AStar.h
//  Squares
//
//  Created by Robby Kraft on 2/21/14.
//  Copyright (c) 2014 Robby Kraft. All rights reserved.
//

#import "BoardLocation.h"

@interface AStar : NSObject

-(id) initWithColumns:(int)columns Rows:(int)rows ObstaclesCells:(NSArray*)obstacleCells;
-(void) updateObstacleCells:(NSArray*)obstacleCells;

-(NSArray*) pathFromAtoB:(BoardLocation*)start B:(BoardLocation*)end;

-(NSArray*) cellsAccesibleFrom:(BoardLocation*)location;

@end