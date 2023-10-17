//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CLBarometerCalibrationSourceClient, CLIntersiloUniverse;

@interface CLBarometerCalibrationSource : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    id <CLBarometerCalibrationSourceClient> _delegate;	// 16 = 0x10
    _Bool _sourceEnabled;	// 24 = 0x18
}

- (void)disableSource;	// IMP=0x002000000020b07b
- (void)enableSource;	// IMP=0x001000000020b075
- (void)dealloc;	// IMP=0x001000000020b03f
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000020af8c

@end

