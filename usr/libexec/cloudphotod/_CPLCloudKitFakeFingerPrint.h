//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLResourceIdentity, NSString;

@interface _CPLCloudKitFakeFingerPrint : NSObject
{
    NSString *_fingerPrint;	// 8 = 0x8
    unsigned long long _realResourceType;	// 16 = 0x10
    NSString *_realFingerPrint;	// 24 = 0x18
    NSString *_outputType;	// 32 = 0x20
    struct CGSize _dimensions;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000c70b8
@property(readonly, nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
@property(readonly, nonatomic) NSString *outputType; // @synthesize outputType=_outputType;
@property(readonly, nonatomic) NSString *realFingerPrint; // @synthesize realFingerPrint=_realFingerPrint;
@property(readonly, nonatomic) unsigned long long realResourceType; // @synthesize realResourceType=_realResourceType;
@property(readonly, nonatomic) CPLResourceIdentity *fakeIdentity;
@property(readonly, nonatomic) NSString *fingerPrint; // @synthesize fingerPrint=_fingerPrint;
- (id)initWithRealResourceType:(unsigned long long)arg1 realFingerPrint:(id)arg2 outputType:(id)arg3 dimensions:(struct CGSize)arg4;	// IMP=0x00100000000c6d5f
- (id)initWithFakeFingerPrint:(id)arg1;	// IMP=0x00100000000c6a3b
- (id)initWithFakeIdentity:(id)arg1;	// IMP=0x00100000000c69e5

@end

