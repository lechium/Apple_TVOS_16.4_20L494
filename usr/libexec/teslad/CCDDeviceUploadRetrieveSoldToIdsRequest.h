//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DEPDeviceUploadOrganization;

@interface CCDDeviceUploadRetrieveSoldToIdsRequest
{
    DEPDeviceUploadOrganization *_organization;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000003031
@property(retain, nonatomic) DEPDeviceUploadOrganization *organization; // @synthesize organization=_organization;
- (id)requestBody;	// IMP=0x0010000000002f42
- (id)endpointPath;	// IMP=0x0010000000002f2e
- (id)httpMethod;	// IMP=0x0010000000002f21
- (long long)requestType;	// IMP=0x0010000000002f16

@end

