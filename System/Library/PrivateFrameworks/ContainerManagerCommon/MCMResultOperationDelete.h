//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MCMResultOperationDelete
{
    NSObject<OS_xpc_object> *_xpcToMerge;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009264c
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcToMerge; // @synthesize xpcToMerge=_xpcToMerge;
- (_Bool)encodeResultOntoReply:(id)arg1;	// IMP=0x0000000000092424
- (void)mergeWithXPCResult:(id)arg1;	// IMP=0x00000000000923e7

@end

