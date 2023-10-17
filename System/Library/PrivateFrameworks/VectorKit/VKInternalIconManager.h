//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKInternalIconManager : NSObject
{
    shared_ptr_6d521cf7 _iconManager;	// 8 = 0x8
    shared_ptr_dd2d1f5e _stylesheetVendor;	// 24 = 0x18
    struct read_write_lock _nameToStyleManagerLock;	// 40 = 0x28
    struct map<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>, NSStringMapComparison, geo::StdAllocator<std::pair<const geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::Allocator>> _nameToStyleManager;	// 240 = 0xf0
    struct _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _manifestTileGroupObserverProxy;	// 272 = 0x110
    struct _retain_ptr<VKResourceManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _resourceManager;	// 296 = 0x128
    struct shared_ptr<md::GeoResourceProvider> _resourceProvider;	// 320 = 0x140
    struct shared_ptr<grl::FontManager> _fontManager;	// 336 = 0x150
    _Bool _isSharedIconManager;	// 352 = 0x160
}

+ (long long)convertGrlSizeGroup:(unsigned char)arg1;	// IMP=0x00600000002965e1
+ (unsigned char)convertSizeGroup:(long long)arg1;	// IMP=0x00600000002965cc
- (id).cxx_construct;	// IMP=0x00000000002996dc
- (void).cxx_destruct;	// IMP=0x000000000029964e
- (void)purgeNonsharedResources;	// IMP=0x0000000000299614
- (void)purge;	// IMP=0x00000000002995e7
- (void)dealloc;	// IMP=0x0000000000299574
- (void)setIsCachingAtlases:(_Bool)arg1;	// IMP=0x0000000000299564
- (_Bool)isCachingAtlases;	// IMP=0x000000000029954a
- (unsigned int)darkVariant;	// IMP=0x000000000029953f
- (unsigned int)trafficIncidentTypeKey;	// IMP=0x0000000000299534
- (unsigned int)styleAttributeTransitSystemTypeKey;	// IMP=0x0000000000299529
- (unsigned int)styleAttributeTransitTypeKey;	// IMP=0x000000000029951e
- (id)imageForIconID:(unsigned int)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;	// IMP=0x0000000000299143
- (id)imageForName:(id)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;	// IMP=0x0000000000298d51
- (id)imageForKey:(unsigned int)arg1 value:(unsigned int)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;	// IMP=0x0000000000298a0d
- (id)imageForDataID:(unsigned int)arg1 text:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;	// IMP=0x000000000029844f
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;	// IMP=0x0000000000297bc5
- (id)imageForStyleAttributes:(id)arg1 styleManager:(shared_ptr_3e3c7f86)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;	// IMP=0x0000000000296d61
- (id)imageForImageSourceKey:(id)arg1;	// IMP=0x00000000002967d2
- (void)_purgeStyleManagers;	// IMP=0x0000000000296776
- (void)_startTileGroupObserver;	// IMP=0x00000000002965f2
- (id)init:(shared_ptr_6d521cf7)arg1 stylesheetVendor:(shared_ptr_dd2d1f5e)arg2;	// IMP=0x00000000002964b5
- (id)init;	// IMP=0x0000000000296124

@end
