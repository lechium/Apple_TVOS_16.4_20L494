//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADOpportuneSpeakingMovingAverageBuffer : NSObject
{
    char *_ring;	// 8 = 0x8
    float _movingAverage;	// 16 = 0x10
    int _size;	// 20 = 0x14
    int _cursor;	// 24 = 0x18
    _Bool _ringFull;	// 28 = 0x1c
}

@property(readonly, nonatomic) float movingAverage; // @synthesize movingAverage=_movingAverage;
- (void)add:(unsigned char)arg1;	// IMP=0x0010000000097de2
- (id)initWithSize:(int)arg1;	// IMP=0x0010000000097d65

@end

