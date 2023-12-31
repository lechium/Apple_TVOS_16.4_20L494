//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/PBSMutableAppInfo.h>

@class NSString, PBApplicationInfo, PBApplicationPlaceholder;

@interface PBMutableAppInfo : PBSMutableAppInfo
{
    PBApplicationInfo *_applicationInfo;	// 8 = 0x8
    PBApplicationPlaceholder *_applicationPlaceholder;	// 16 = 0x10
}

+ (long long)_mapApplicationTypeString:(id)arg1;	// IMP=0x00200000000daedf
+ (long long)_mapInstallFailureReason:(id)arg1;	// IMP=0x00100000000dae79
+ (long long)_mapInstallType:(unsigned long long)arg1;	// IMP=0x00100000000dae6a
+ (long long)_mapProgressState:(long long)arg1;	// IMP=0x00100000000dae56
+ (long long)_mapApplicationGenreID:(id)arg1;	// IMP=0x00100000000dae20
+ (long long)_mapApplicationType:(unsigned long long)arg1;	// IMP=0x00100000000dae0b
- (void).cxx_destruct;	// IMP=0x00200000000dafb6
@property(retain, nonatomic) PBApplicationPlaceholder *applicationPlaceholder; // @synthesize applicationPlaceholder=_applicationPlaceholder;
@property(retain, nonatomic) PBApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
- (_Bool)isPBAppInfo;	// IMP=0x00100000000dae03
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000dadcc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000dad95
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000daa3c
- (id)initWithAppInfo:(id)arg1;	// IMP=0x00100000000da96c
- (id)initWithApplicationPlaceholder:(id)arg1;	// IMP=0x00100000000da66b
- (id)initWithApplicationInfo:(id)arg1;	// IMP=0x00100000000da270

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

