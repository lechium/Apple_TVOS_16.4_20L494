//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITapGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UIVoiceCommandButtonTapGestureRecognizer : UITapGestureRecognizer
{
    double _pressEventBeginTimestamp;	// 8 = 0x8
    double _pressEventEndTimestamp;	// 16 = 0x10
}

@property(nonatomic) double pressEventEndTimestamp; // @synthesize pressEventEndTimestamp=_pressEventEndTimestamp;
@property(nonatomic) double pressEventBeginTimestamp; // @synthesize pressEventBeginTimestamp=_pressEventBeginTimestamp;
- (id)voiceCommandButtonTapDuration;	// IMP=0x000000000099cb96
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000099cb09
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000099ca7c
- (void)reset;	// IMP=0x000000000099ca33

@end
