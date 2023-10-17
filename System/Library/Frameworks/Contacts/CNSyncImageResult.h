//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CNSyncImageResult : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSData *_imageData;	// 16 = 0x10
    NSData *_imageHash;	// 24 = 0x18
    struct CGRect _cropRect;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000010d333
@property(readonly, nonatomic) NSData *imageHash; // @synthesize imageHash=_imageHash;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 imageData:(id)arg2 cropRect:(struct CGRect)arg3 imageHash:(id)arg4;	// IMP=0x000000000010d239

@end

