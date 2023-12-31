//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCSyntheticDevice : NSObject
{
    unsigned int _service;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (id)deviceWithService:(unsigned int)arg1;	// IMP=0x0060000000025b02
+ (id)devicePropertiesWithDescription:(id)arg1;	// IMP=0x0060000000025959
- (void).cxx_destruct;	// IMP=0x0000000000025fa3
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) unsigned int service; // @synthesize service=_service;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000025ea1
- (unsigned long long)hash;	// IMP=0x0000000000025e8b
- (void)dealloc;	// IMP=0x0000000000025e52
- (id)init;	// IMP=0x0000000000025e27
- (id)initWithService:(unsigned int)arg1;	// IMP=0x0000000000025caa

@end

