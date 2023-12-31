//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface SLFetchShareableContentAction
{
    NSString *_requestedTypeIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000001df04
- (void).cxx_destruct;	// IMP=0x000000000001e082
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001dfcf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001df0c
@property(readonly, copy, nonatomic) NSString *requestedTypeIdentifier; // @synthesize requestedTypeIdentifier=_requestedTypeIdentifier;
- (id)initWithSceneIdentifier:(id)arg1 requestedTypeIdentifier:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001de6d

@end

