//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@class GCVersion, NSString;

__attribute__((visibility("hidden")))
@interface _GCConfigurationBundle : NSBundle
{
    GCVersion *_version;	// 8 = 0x8
    NSString *_configurationType;	// 16 = 0x10
    GCVersion *_compatibilityVersion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000015b03
@property(readonly) GCVersion *compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(readonly) NSString *configurationType; // @synthesize configurationType=_configurationType;
@property(readonly) GCVersion *version; // @synthesize version=_version;
- (id)debugDescription;	// IMP=0x00000000000159f8
- (id)redactedDescription;	// IMP=0x0000000000015965
- (id)description;	// IMP=0x00000000000158d2
@property(readonly) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000158b5
- (id)init;	// IMP=0x000000000001588a
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000015876
- (id)initWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014960

@end
