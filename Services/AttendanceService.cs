using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;

public class AttendanceService
{
    private readonly ConcurrentDictionary<int, ConcurrentBag<string>> _attendance = new();

    public void MarkAttendance(int eventId, string userName)
    {
        var attendees = _attendance.GetOrAdd(eventId, _ => new ConcurrentBag<string>());
        if (!attendees.Contains(userName))
        {
            attendees.Add(userName);
        }
    }

    public IReadOnlyList<string> GetAttendees(int eventId)
    {
        return _attendance.TryGetValue(eventId, out var attendees)
            ? attendees.ToList()
            : new List<string>();
    }
}