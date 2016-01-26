//
//  FIBaseDynamicViewController.h
//  FIDynamicViewController
//
//  Created by NGUYEN CHI CONG on 8/7/15.
//  Copyright (c) 2015 NGUYEN CHI CONG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FIDynamicViewControllerProtocol.h"
#import "FIDynamicPresenterProtocol.h"

@interface FIBaseDynamicViewController : UIViewController<FIDynamicViewControllerProtocol>

/**
  Model for storing data model in view controller
*/
@property (nonatomic, readonly) id <FIDynamicPresenterProtocol>__nullable dynamicPresenter;

- (void)setDynamicPresenterModel:(id <FIDynamicPresenterProtocol>_Nullable)dynamicPresenter;

/**
  Call this method to update model presenter
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
  Functions
*/
- (void)configurePresenterForSubControllers;
- (void)addSubViewController:(UIViewController <FISubViewControllerProtocol>* __nonnull)childController withConfiguration: (void(^ __nullable)(UIView * __nonnull childView))configurationBlock;
- (void)removeSubViewController:(UIViewController <FISubViewControllerProtocol>* __nonnull)childController;


@end
