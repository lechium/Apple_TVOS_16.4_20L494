//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebJSRequest : NSObject
{
    NSString *_logKey;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
    NSString *_service;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000080107
- (void).cxx_destruct;	// IMP=0x000000000008040d
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000801f2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008010f
- (id)initWithServiceName:(id)arg1 logKey:(id)arg2;	// IMP=0x000000000008004f
- (id)init;	// IMP=0x0000000000080020

@end

