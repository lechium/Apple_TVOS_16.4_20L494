//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSURLConnectionRequest.h>

@class NSNumber, NSString;

@interface SBDPushRegistrationRequest : SSURLConnectionRequest
{
    _Bool _optIn;	// 64 = 0x40
    NSNumber *_storeAccountID;	// 72 = 0x48
    NSString *_domain;	// 80 = 0x50
}

+ (id)requestForDomain:(id)arg1 optIn:(_Bool)arg2 accountID:(id)arg3 typeRegistrationURL:(id)arg4;	// IMP=0x004000000001190b
- (void).cxx_destruct;	// IMP=0x002000000001187f
@property(readonly, nonatomic) _Bool optIn; // @synthesize optIn=_optIn;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSNumber *storeAccountID; // @synthesize storeAccountID=_storeAccountID;
- (_Bool)isEqualToRegistrationRequest:(id)arg1;	// IMP=0x00100000000116b3
- (id)_requestPropertiesForDomain:(id)arg1 optIn:(_Bool)arg2 typeRegistrationURL:(id)arg3;	// IMP=0x0010000000011474
- (id)initWithDomain:(id)arg1 optIn:(_Bool)arg2 accountID:(id)arg3 typeRegistrationURL:(id)arg4;	// IMP=0x0010000000011386

@end

