//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVHKDMAPEntityKind;

__attribute__((visibility("hidden")))
@interface TVHKDMAPEntityResponseParser : NSObject
{
    unsigned long long _maxEntities;	// 8 = 0x8
    unsigned long long _protocol;	// 16 = 0x10
    TVHKDMAPEntityKind *_entityKind;	// 24 = 0x18
}

+ (unsigned long long)_responseTypeFromUpdateTypePayload:(id)arg1;	// IMP=0x006000000008cdcc
+ (id)_deletedEntityNonPersistentIDsFromDeletedIDsListingPayload:(id)arg1;	// IMP=0x006000000008cc5a
+ (id)_errorFromUpdateResponsePayload:(id)arg1;	// IMP=0x006000000008ca71
+ (id)_errorFromErrorResponsePayload:(id)arg1;	// IMP=0x006000000008c907
+ (id)_errorFromErrorResponseData:(id)arg1;	// IMP=0x006000000008c752
+ (id)new;	// IMP=0x006000000008ba3c
- (void).cxx_destruct;	// IMP=0x000000000008d262
@property(retain, nonatomic) TVHKDMAPEntityKind *entityKind; // @synthesize entityKind=_entityKind;
@property(nonatomic) unsigned long long protocol; // @synthesize protocol=_protocol;
@property(nonatomic) unsigned long long maxEntities; // @synthesize maxEntities=_maxEntities;
- (id)_parsedResponseFromDPAPResponseCode:(unsigned int)arg1 responsePayload:(id)arg2 requestType:(unsigned long long)arg3;	// IMP=0x000000000008d1f7
- (unsigned int)_expectedDPAPResponseCodeForRequestType:(unsigned long long)arg1;	// IMP=0x000000000008d1da
- (id)_parsedResponseFromDAAPResponseCode:(unsigned int)arg1 responsePayload:(id)arg2 requestType:(unsigned long long)arg3;	// IMP=0x000000000008d157
- (unsigned int)_expectedDAAPResponseCodeForRequestType:(unsigned long long)arg1;	// IMP=0x000000000008d13a
- (id)_entitiesFromListingTagPayload:(id)arg1 entityType:(unsigned long long)arg2 browseStyleListing:(_Bool)arg3;	// IMP=0x000000000008ce59
- (id)_parsedResponseFromResponsePayload:(id)arg1 listingCode:(unsigned int)arg2 browseStyleListing:(_Bool)arg3 entityType:(unsigned long long)arg4;	// IMP=0x000000000008c2fa
- (id)_parsedResponseFromResponseCode:(unsigned int)arg1 responsePayload:(id)arg2 requestType:(unsigned long long)arg3;	// IMP=0x000000000008c272
- (id)_parsedResponseFromResponseData:(id)arg1 expectedResponseCode:(unsigned int)arg2 requestType:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000008bef7
- (unsigned int)_expectedResponseCodeForRequestType:(unsigned long long)arg1;	// IMP=0x000000000008bea8
- (id)parsedResponseFromResponse:(id)arg1 requestType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000008bb3f
- (id)initWithProtocol:(unsigned long long)arg1;	// IMP=0x000000000008bada
- (id)init;	// IMP=0x000000000008ba6b

@end

