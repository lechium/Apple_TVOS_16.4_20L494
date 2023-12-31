//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol WFFavoriteLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface WFDefaultFavoritesProvider : NSObject
{
    id <WFFavoriteLocationProviderDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000001b08
@property(nonatomic) __weak id <WFFavoriteLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeLocation:(id)arg1;	// IMP=0x0000000000001adb
- (void)addLocation:(id)arg1;	// IMP=0x0000000000001ad5
- (void)setLocations:(id)arg1;	// IMP=0x0000000000001acf
- (id)locationFromCity:(id)arg1;	// IMP=0x00000000000019e1
- (id)locations;	// IMP=0x00000000000016be
- (_Bool)canProvideDefaultFavorites;	// IMP=0x00000000000016b6
- (id)init;	// IMP=0x00000000000016a0
- (id)initWithDelegate:(id)arg1 persistence:(id)arg2;	// IMP=0x0000000000001625

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

