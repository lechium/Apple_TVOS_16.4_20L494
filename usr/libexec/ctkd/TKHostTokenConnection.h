//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListenerEndpoint, TKHostToken;

@interface TKHostTokenConnection : NSObject
{
    TKHostToken *_token;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000017b7
@property(readonly, nonatomic) TKHostToken *token; // @synthesize token=_token;
- (void)dealloc;	// IMP=0x001000000000163f
@property(readonly, nonatomic) NSString *slotName;
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
- (id)initWithDriver:(id)arg1 slot:(id)arg2 AID:(id)arg3 registry:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000012ec
- (id)initWithToken:(id)arg1;	// IMP=0x001000000000125c

@end

