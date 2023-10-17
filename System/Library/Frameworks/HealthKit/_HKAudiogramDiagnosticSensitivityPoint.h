//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _HKAudiogramDiagnosticSensitivityPoint : NSObject
{
    double _earSensitivityDBHL;	// 8 = 0x8
    double _frequencyHz;	// 16 = 0x10
}

@property(readonly, nonatomic) double frequencyHz; // @synthesize frequencyHz=_frequencyHz;
@property(readonly, nonatomic) double earSensitivityDBHL; // @synthesize earSensitivityDBHL=_earSensitivityDBHL;
- (id)initWithEarSensitivity:(id)arg1 frequency:(id)arg2;	// IMP=0x000000000015cbee

@end

