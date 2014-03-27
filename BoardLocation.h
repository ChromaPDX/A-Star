//
//  BoardLocation.h
//  CardDeck
//
//  Created by Robby Kraft on 9/20/13.
//  Copyright (c) 2013 Robby Kraft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BoardLocation : NSObject <NSCopying, NSCoding>
{
    
}
@property NSInteger x;
@property NSInteger y;

+(instancetype)pX:(int)x Y:(int)y;
+(instancetype)pointWithCGPoint:(CGPoint)point;
-(id)initWithX:(NSInteger)x Y:(NSInteger)y;
-(CGPoint)CGPoint;
-(BOOL)isEqual:(BoardLocation*)point;

@end