//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBHandwritingPointFIFO : NSObject
{
    UIKBHandwritingPointFIFO *_nextFIFO;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000008cd305
@property(retain, nonatomic) UIKBHandwritingPointFIFO *nextFIFO; // @synthesize nextFIFO=_nextFIFO;
- (void)clear;	// IMP=0x00000000008cd2ad
- (void)flush;	// IMP=0x00000000008cd270
- (void)addPoint:(struct)arg1;	// IMP=0x00000000008cd25e
- (void)emitPoint:(struct)arg1;	// IMP=0x00000000008cd208
- (id)initWithFIFO:(id)arg1;	// IMP=0x00000000008cd1a0

@end

