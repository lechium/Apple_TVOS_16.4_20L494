//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VideoFrameWriterElement : NSObject
{
    struct __CVBuffer *_pixelBuffer;	// 8 = 0x8
    CDStruct_1b6d18a9 _frameTime;	// 16 = 0x10
    long long _frameNumber;	// 40 = 0x28
}

@property(nonatomic) long long frameNumber; // @synthesize frameNumber=_frameNumber;
@property(nonatomic) CDStruct_1b6d18a9 frameTime; // @synthesize frameTime=_frameTime;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)dealloc;	// IMP=0x000000000001d13a
- (void)DeallocPixBuffer;	// IMP=0x000000000001d0da

@end

