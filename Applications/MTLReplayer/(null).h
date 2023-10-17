//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTProcessInfo, GTServiceProperties;

@interface (null) : NSObject
{
    GTServiceProperties *_serviceProperties;	// 8 = 0x8
    GTProcessInfo *_processInfo;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000528a9
- (void).cxx_destruct;	// IMP=0x0020000000052881
@property(readonly, nonatomic) GTProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) GTServiceProperties *serviceProperties; // @synthesize serviceProperties=_serviceProperties;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000527ff
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000052725
- (id)initWithService:(id)arg1 processInfo:(id)arg2;	// IMP=0x001000000005268c

@end

