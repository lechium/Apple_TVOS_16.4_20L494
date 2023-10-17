//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSServiceMonitor : NSObject
{
    long long _availability;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    int _token;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000118226
- (id)description;	// IMP=0x00000000001181a9
@property(readonly, nonatomic) NSString *service;
- (long long)serviceAvailability;	// IMP=0x0000000000118191
- (void)updateAvailability;	// IMP=0x000000000011812c
- (void)_updateAvailability;	// IMP=0x0000000000118028
- (void)_postAvailability:(long long)arg1;	// IMP=0x0000000000117f64
- (void)dealloc;	// IMP=0x0000000000117ea0
- (id)initWithService:(id)arg1;	// IMP=0x0000000000117bb5

@end

