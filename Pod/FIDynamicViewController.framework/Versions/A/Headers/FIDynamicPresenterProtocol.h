//
//  FIDynamicPresenter.h
//  StoryboardDemo
//
//  Created by NGUYEN CHI CONG on 8/7/15.
//  Copyright (c) 2015 NGUYEN CHI CONG. All rights reserved.
//

@protocol FIDynamicObservableDelegate;
@protocol FIDynamicPresenterProtocol <NSObject>

@property (nonatomic, weak) id<FIDynamicObservableDelegate> delegate;

- (void)updatePresenterWithBlock: (void(^)()) block observer: (id)observer;

@end

@protocol FIDynamicObservableDelegate <NSObject>

- (void)presenterModel:(id<FIDynamicPresenterProtocol>)dynamicModel changedValue:(id)value keyPath:(NSString *)keyPath;

@end
