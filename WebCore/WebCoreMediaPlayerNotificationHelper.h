/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WebCoreMediaPlayerNotificationHelper : NSObject
{
    struct MediaPlayerPrivateiPhone *_client;
    BOOL _deferredPropertiesScheduled;
}

- (id)initWithClient:(struct MediaPlayerPrivateiPhone *)arg1;
- (void)disconnect;
- (void)cancelPendingRequests;
- (void)delayNotification:(int)arg1;
- (void)deliverNotification:(id)arg1;
- (void)schedulePrepareToPlayWithOptionalDelay:(id)arg1;
- (void)scheduleDeferredPropertiesWithOptionalDelay:(id)arg1;

@end

