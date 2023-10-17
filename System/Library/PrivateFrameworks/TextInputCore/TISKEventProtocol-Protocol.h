//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TIKeyboardTouchEvent, TISKEvent, TISKSessionStats;

@protocol TISKEventProtocol
- (void)reportInterKeyTiming:(TISKSessionStats *)arg1 previousEvent:(TISKEvent *)arg2;
- (void)reportToSession:(TISKSessionStats *)arg1;
- (NSString *)privateDescription;
- (NSString *)description;
- (double)touchUpTimestamp;
- (double)touchDownTimestamp;
- (TIKeyboardTouchEvent *)downTouchEvent;
- (TIKeyboardTouchEvent *)upTouchEvent;
@end

