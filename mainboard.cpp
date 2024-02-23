var app = new App();
await app.Run();

// hi
record Person (
  string Name,
  int Age,
  string? Nickname = null
) {

  public async Task<string> Notify() {
    // * Exception Handling
    try {
      var msg = $"Happy {this.Age}th b-day!";
      return await Task.FromResult(msg);
    }
    catch (Exception) { throw; }
    finally { }
  }



    // * Arrow style
    void trace() => Console.WriteLine("Done");
    trace();

//not nedded 

    var outer = () => {
      var ( name, age, _ ) = thomas;
      Console.WriteLine(name);
 

//more down here
