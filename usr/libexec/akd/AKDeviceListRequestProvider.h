//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKDeviceListRequestContext;

@interface AKDeviceListRequestProvider
{
    AKDeviceListRequestContext *_deviceRequestContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000002c3c0
@property(retain, nonatomic) AKDeviceListRequestContext *deviceRequestContext; // @synthesize deviceRequestContext=_deviceRequestContext;
- (unsigned long long)expectedResponseType;	// IMP=0x001000000002c390
- (id)requestURL;	// IMP=0x001000000002bf3f

@end
