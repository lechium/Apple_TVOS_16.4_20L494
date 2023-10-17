//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MPContentTastePendingUpdateRecord : NSObject
{
    NSString *_playlistGlobalID;	// 8 = 0x8
    long long _storeAdamID;	// 16 = 0x10
    long long _tasteType;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    NSUUID *_UUID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002ab820
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long tasteType; // @synthesize tasteType=_tasteType;
@property(readonly, nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(readonly, nonatomic) NSString *playlistGlobalID; // @synthesize playlistGlobalID=_playlistGlobalID;
- (void)_initializeWithType:(long long)arg1 tasteType:(long long)arg2;	// IMP=0x00000000002ab7ad
- (id)initWithStoreAdamID:(long long)arg1 tasteType:(long long)arg2;	// IMP=0x00000000002ab747
- (id)initWithPlaylistGlobalID:(id)arg1 tasteType:(long long)arg2;	// IMP=0x00000000002ab6b3

@end

