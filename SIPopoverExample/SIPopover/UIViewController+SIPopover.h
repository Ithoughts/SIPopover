//
//  UIViewController+SIPopover.h
//
//  Created by Kevin Cao on 13-12-15.
//  Copyright (c) 2013年 Sumi Interactive. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SIPopoverAnimator.h"

@interface UIViewController (SIPopover)

- (UIOffset)si_popoverOffset;

- (void)si_presentPopover:(UIViewController *)viewController transitionStyle:(SIPopoverTransitionStyle)transitionStyle;
- (void)si_presentPopover:(UIViewController *)viewController transitionStyle:(SIPopoverTransitionStyle)transitionStyle backgroundEffect:(SIPopoverBackgroundEffect)backgroundEffect;
- (void)si_presentPopover:(UIViewController *)viewController transitionStyle:(SIPopoverTransitionStyle)transitionStyle backgroundEffect:(SIPopoverBackgroundEffect)backgroundEffect duration:(NSTimeInterval)duration;

@end
