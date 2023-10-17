//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/NSObject-Protocol.h>

@class NSSet, UIEvent, UIWebTouchEventsGestureRecognizer;

@protocol UIWebTouchEventsGestureRecognizerDelegate <NSObject>
- (_Bool)isAnyTouchOverActiveArea:(NSSet *)arg1;

@optional
- (_Bool)gestureRecognizer:(UIWebTouchEventsGestureRecognizer *)arg1 shouldIgnoreWebTouchWithEvent:(UIEvent *)arg2;
- (_Bool)shouldIgnoreWebTouch;
@end

