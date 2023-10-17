//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriSharedUI/NSObject-Protocol.h>

@class SiriSharedUIExpandablePlatterPanGestureRecognizer;

@protocol SiriSharedUIExpandablePlatterPanGestureRecognizerDelegate <NSObject>
- (void)expandablePlatterGesture:(SiriSharedUIExpandablePlatterPanGestureRecognizer *)arg1 trackingGestureDidUpdateHeight:(double)arg2;
- (void)expandablePlatterGesture:(SiriSharedUIExpandablePlatterPanGestureRecognizer *)arg1 didCompleteTransitionToStyle:(long long)arg2 phaseHeight:(double)arg3;
- (void)expandablePlatterGestureDidEndWithRecognizer:(SiriSharedUIExpandablePlatterPanGestureRecognizer *)arg1;
- (void)expandablePlatterGestureDidBeginWithRecognizer:(SiriSharedUIExpandablePlatterPanGestureRecognizer *)arg1;
@end

