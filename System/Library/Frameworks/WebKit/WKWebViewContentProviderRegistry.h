//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKWebViewContentProviderRegistry : NSObject
{
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider>>, WTF::HashTableTraits> _contentProviderForMIMEType;	// 8 = 0x8
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>> _pages;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000305dec
- (void).cxx_destruct;	// IMP=0x0000000000305d64
- (Vector_07070297)_mimeTypesWithCustomContentProviders;	// IMP=0x0000000000305c3c
- (Class)providerForMIMEType:(const void *)arg1;	// IMP=0x0000000000305b57
- (void)registerProvider:(Class)arg1 forMIMEType:(const void *)arg2;	// IMP=0x0000000000305931
- (void)removePage:(void *)arg1;	// IMP=0x00000000003058b7
- (void)addPage:(void *)arg1;	// IMP=0x000000000030575a
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000030572b

@end

