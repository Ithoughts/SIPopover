//
//  SIPopoverSegue.m
//
//  Created by Kevin Cao on 13-12-15.
//  Copyright (c) 2013年 Sumi Interactive. All rights reserved.
//

#import "SIPopoverSegue.h"

@implementation SIPopoverSegue

- (void)perform
{
    [self.sourceViewController si_presentPopover:self.destinationViewController transitionStyle:self.transitionStyle];
}

@end
