//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/UIGestureRecognizerDelegate-Protocol.h>

@class _UIRotaryGestureRecognizer;

@protocol _UIRotaryGestureRecognizerDelegate <UIGestureRecognizerDelegate>

@optional
- (void)rotaryGestureRecognizerFailedClassifyingMovement:(_UIRotaryGestureRecognizer *)arg1;
- (void)rotaryGestureRecognizerUpdatedClassifyingMovement:(_UIRotaryGestureRecognizer *)arg1;
- (void)rotaryGestureRecognizerBeganClassifyingMovement:(_UIRotaryGestureRecognizer *)arg1;
- (void)rotaryGestureRecognizerCancelledRestTimer:(_UIRotaryGestureRecognizer *)arg1;
- (void)rotaryGestureRecognizerStartedRestTimer:(_UIRotaryGestureRecognizer *)arg1;
- (_Bool)rotaryGestureRecognizerMustBeginFromRest:(_UIRotaryGestureRecognizer *)arg1;
- (_Bool)rotaryGestureRecognizerCanBeginFromRest:(_UIRotaryGestureRecognizer *)arg1;
@end
