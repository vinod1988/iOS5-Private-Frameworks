/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, VMUMachOHeader;

@interface VMUDyld : NSObject
{
    VMUMachOHeader *_dyldMachOHeader;
    NSArray *_machOHeaders;
}

+ (id)dyldWithMachOHeader:(id)arg1 memory:(id)arg2;
+ (id)nativeSharedCachePath;
+ (id)nativeSharedCacheTimestamp;
- (id)initWithMachOHeader:(id)arg1 memory:(id)arg2;
- (id)findMachOHeadersInMemory:(id)arg1;
- (id)name;
- (id)machOHeaders;
- (void)dealloc;

@end

