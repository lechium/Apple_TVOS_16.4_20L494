//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayConfiguration, MISSING_TYPE, NSString, UISDeviceContext, UISDisplayContext;

@interface _TtC14Xcode_Previews10SimDisplay : NSObject
{
    MISSING_TYPE *name;	// 8 = 0x8
    MISSING_TYPE *displayID;	// 24 = 0x18
    MISSING_TYPE *capabilities;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x004000000000f5a0
- (id)init;	// IMP=0x001000000000f540
- (id)initWithName:(id)arg1 displayID:(unsigned int)arg2 displayConfiguration:(id)arg3 capabilitiesPath:(id)arg4;	// IMP=0x001000000000f4a0
@property(nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property(nonatomic, readonly) UISDisplayContext *displayContext;
@property(nonatomic, readonly) UISDeviceContext *deviceContext;
@property(nonatomic, readonly) unsigned int displayID; // @synthesize displayID;
@property(nonatomic, readonly) NSString *name;

@end

