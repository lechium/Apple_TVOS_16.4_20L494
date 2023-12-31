//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKDContainerServerInfo, NSString;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest
{
    _Bool _requireUserIDs;	// 8 = 0x8
    NSString *_containerIdentifier;	// 16 = 0x10
    CKDContainerServerInfo *_containerServerInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010018f
@property(copy, nonatomic) CKDContainerServerInfo *containerServerInfo; // @synthesize containerServerInfo=_containerServerInfo;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(nonatomic) _Bool requireUserIDs; // @synthesize requireUserIDs=_requireUserIDs;
- (void)requestDidParseJSONObject:(id)arg1;	// IMP=0x00000000000ff1ab
- (_Bool)hasRequestBody;	// IMP=0x00000000000ff1a3
- (id)url;	// IMP=0x00000000000fef60
- (long long)partitionType;	// IMP=0x00000000000fef55
- (long long)serverType;	// IMP=0x00000000000fef4a
- (_Bool)usesiCloudAuthToken;	// IMP=0x00000000000fef42
- (_Bool)usesCloudKitAuthToken;	// IMP=0x00000000000fef3a
- (_Bool)allowsAuthedAccount;	// IMP=0x00000000000fef32
- (_Bool)allowsAnonymousAccount;	// IMP=0x00000000000fef1d
- (_Bool)requiresDeviceID;	// IMP=0x00000000000fef15
- (_Bool)requiresConfiguration;	// IMP=0x00000000000fef0d
- (id)initWithOperation:(id)arg1 containerIdentifier:(id)arg2;	// IMP=0x00000000000fee95

@end

