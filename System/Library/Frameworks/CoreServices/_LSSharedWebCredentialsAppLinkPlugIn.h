//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSSharedWebCredentialsAppLinkPlugIn
{
}

- (id)appLinksWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x000000000004efa0
- (id)callingBundleIdentifier;	// IMP=0x000000000004ef35
- (id)appLinksWithContext:(struct LSContext *)arg1 forSWCResults:(id)arg2;	// IMP=0x000000000004e873
- (void)enumerateBindingsWithContext:(struct LSContext *)arg1 forSWCResults:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000004e44b
- (optional_430a8fae)bindingWithContext:(struct LSContext *)arg1 forServiceDetails:(id)arg2 callingBundleIdentifier:(id)arg3;	// IMP=0x000000000004dea6
- (id)init;	// IMP=0x000000000004de38

@end

