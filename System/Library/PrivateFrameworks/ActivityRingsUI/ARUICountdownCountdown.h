//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ARUICountdownCountdown
{
    unsigned long long _step;	// 8 = 0x8
    _Bool _cancelable;	// 16 = 0x10
    double _percent;	// 24 = 0x18
}

+ (id)identifier;	// IMP=0x00100000000155e4
@property(nonatomic) double percent; // @synthesize percent=_percent;
- (unsigned long long)countdownStep;	// IMP=0x000000000001590d
- (void)applyToCountdownView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000156d2
- (id)description;	// IMP=0x000000000001560b
- (id)identifier;	// IMP=0x00000000000155f1
- (_Bool)cancelable;	// IMP=0x00000000000155d4
- (id)timingFunction;	// IMP=0x00000000000155a5
- (double)duration;	// IMP=0x0000000000015597
- (double)delay;	// IMP=0x0000000000015589
- (id)initWithPercent:(double)arg1 andStep:(unsigned long long)arg2 cancelable:(_Bool)arg3;	// IMP=0x000000000001551d

@end

