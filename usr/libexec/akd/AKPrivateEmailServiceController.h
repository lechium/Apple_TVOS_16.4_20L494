//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKClient, NSString;

@interface AKPrivateEmailServiceController
{
    AKClient *_client;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
    _Bool;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000693b1
@property(nonatomic) _Bool isSecondCall; // @synthesize isSecondCall=_isSecondCall;
- (id)_constructRequestProviderForClient:(id)arg1 altDSID:(id)arg2;	// IMP=0x001000000006914d
- (void)executeFetchHmeListRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000068c84
- (id)initWithClient:(id)arg1 altDSID:(id)arg2;	// IMP=0x0010000000068b8a

@end

