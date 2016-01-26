//
//  FIBaseSubViewController.h
//  FIDynamicViewController
//
//  Created by NGUYEN CHI CONG on 8/7/15.
//  Copyright (c) 2015 NGUYEN CHI CONG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FISubViewControllerProtocol.h"
#import "FIDynamicViewControllerProtocol.h"

@class FIBaseSubViewController;

@interface FIBaseSubViewController : UIViewController <FISubViewControllerProtocol>

@property (nonatomic, weak) id dynamicPresenter;
@property (nonatomic, weak) id<FIDynamicViewControllerProtocol> containerController;

/**
    Call this method when update presenter model
*/
- (void)updatePresenterWithBlock: (void(^ __nullable)()) block;

- (void)updatePresenterProperty:(SEL __nonnull) selector withBlock:(void(^ __nullable)( id __nullable value)) block;

/**
  Override this methods to handle when presenter updated
*/
- (void)presenterNeedUpdate;

- (void)presenterDidLoad;

- (void)presenterChangedValue: (id __nullable)value keyPath:(NSString * __nonnull)keyPath;

/**
  Call this method when has update layout at sub view controller
*/
- (void)needUpdateLayoutAnimated: (BOOL)animated;

@end
